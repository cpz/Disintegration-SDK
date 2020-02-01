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

// WidgetBlueprintGeneratedClass PartyManagementMenuPlayerEntryWidget_BP.PartyManagementMenuPlayerEntryWidget_BP_C
// 0x0010 (0x0490 - 0x0480)
class UPartyManagementMenuPlayerEntryWidget_BP_C : public UPartyManagementMenuPlayerEntryWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      HoverImage;                                               // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyManagementMenuPlayerEntryWidget_BP.PartyManagementMenuPlayerEntryWidget_BP_C");
		return ptr;
	}


	void OnHoveredBP();
	void OnUnHoveredBP();
	void Construct();
	void ExecuteUbergraph_PartyManagementMenuPlayerEntryWidget_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
