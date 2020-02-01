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

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (0x0398 - 0x0390)
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemComponent
// 0x0010 (0x05C0 - 0x05B0)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}


	void ApplyUniformVectorFalloffForce(bool* Enabled, struct FVector* Position, struct FVector* Direction, float* Radius, float* Magnitude);
	void ApplyStayDynamicField(bool* Enabled, struct FVector* Position, float* Radius, int* MaxLevelPerCommand);
	void ApplyRadialVectorFalloffForce(bool* Enabled, struct FVector* Position, float* Radius, float* Magnitude);
	void ApplyRadialForce(bool* Enabled, struct FVector* Position, float* Magnitude);
	void ApplyLinearForce(bool* Enabled, struct FVector* Direction, float* Magnitude);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
