#pragma once

class  ITimer
{
public:

	//���캯��
	ITimer(TIMER_TIMEUINT timeUnit);

	void		SelfDestruction();

	//�ں��������const��ʾ�˺��������޸����Ա
	//��ͣ���ټ�
	double GetTotalTime()const;

	//��ȡ���ʱ��
	double GetInterval()const;

	//����ʱ�䵥λ
	void SetTimeUnit(TIMER_TIMEUINT timeUnit = TIMER_TIMEUNIT_MILLISECOND);

	//������һ֡
	void NextTick();

	//....
	UINT	 GetFPS() const;

	//��ͣ��ʱ
	void Pause();

	void Continue();

	//������������
	void ResetAll();

	void ResetTotalTime();

private:
	//���º����ʱ��(ms)
	double					mTotalTime;
	//����INTERVAL ��֡���ʱ����
	double					mDeltaTime;
	//ÿһcountռ�˶��ٺ���
	double					mMilliSecondsPerCount;
	//how many ticks are in current second
	UINT						mCurrentSecondTickCount;
	//a rounded total time
	UINT						mCurrentSecondInteger;
	//frames per second
	UINT						mFPS;

	//ʱ����
	TIMER_TIMEUINT	mTimeUnit;
	//
	BOOL					mIsPaused;
	//queryPerformanceò�Ʒ��ص��Ǿ���count����������query���count
	INT64					mPrevCount;
	//
	INT64					mCurrentCount;
	//
	INT64					mDeltaCount;
};