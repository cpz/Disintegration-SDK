#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AudioCapture.AudioCaptureComponent
// 0x00B0 (0x0750 - 0x06A0)
class UAudioCaptureComponent : public USynthComponent
{
public:
	int                                                JitterLatencyFrames;                                      // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x06A4(0x00AC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
