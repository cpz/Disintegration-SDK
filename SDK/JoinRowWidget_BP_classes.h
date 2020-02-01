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

// WidgetBlueprintGeneratedClass JoinRowWidget_BP.JoinRowWidget_BP_C
// 0x0010 (0x0380 - 0x0370)
class UJoinRowWidget_BP_C : public UJoinGameSessionRowUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UV1Button*                                   V1Button_86;                                              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JoinRowWidget_BP.JoinRowWidget_BP_C");
		return ptr;
	}


	void BndEvt__V1Button_85_K2Node_ComponentBoundEvent_0_V1OnButtonPressedEvent__DelegateSignature();
	void BndEvt__V1Button_85_K2Node_ComponentBoundEvent_1_V1OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_JoinRowWidget_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
