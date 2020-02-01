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

// WidgetBlueprintGeneratedClass PlayerBadgeEditorWidget_BP.PlayerBadgeEditorWidget_BP_C
// 0x0000 (0x02B8 - 0x02B8)
class UPlayerBadgeEditorWidget_BP_C : public UPlayerBadgeEditorWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerBadgeEditorWidget_BP.PlayerBadgeEditorWidget_BP_C");
		return ptr;
	}


	struct FEventReply OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
