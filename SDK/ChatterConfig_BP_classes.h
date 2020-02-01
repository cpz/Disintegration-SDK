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

// BlueprintGeneratedClass ChatterConfig_BP.ChatterConfig_BP_C
// 0x0B2C (0x0C74 - 0x0148)
class UChatterConfig_BP_C : public UChatterConfig
{
public:
	struct FChatterPriorityConfig                      Default;                                                  // 0x0148(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_AbilityCancel;                                         // 0x0174(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_AbilityNotReady;                                       // 0x01A0(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_AbilityPerformed;                                      // 0x01CC(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_AbilityPerforming;                                     // 0x01F8(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_AbilityReady;                                          // 0x0224(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_AbilityWilco;                                          // 0x0250(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Congrat;                                               // 0x027C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_CongratSelf;                                           // 0x02A8(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_CongratUnit;                                           // 0x02D4(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyAssassinTargeted;                                 // 0x0300(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyDestroyerTargeted;                                // 0x032C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyEngage;                                           // 0x0358(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyGCDestroyed;                                      // 0x0384(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyGCDetected;                                       // 0x03B0(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyGCTargeted;                                       // 0x03DC(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyGuardianTargeted;                                 // 0x0408(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyMercTargeted;                                     // 0x0434(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyRangerTargeted;                                   // 0x0460(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyReinforcements;                                   // 0x048C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyReviving;                                         // 0x04B8(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyRhinoTargeted;                                    // 0x04E4(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemySlagTargeted;                                     // 0x0510(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyTankTargeted;                                     // 0x053C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyThunderheadTargeted;                              // 0x0568(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyUnitDestoyed;                                     // 0x0594(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyUnitDetected;                                     // 0x05C0(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyWarriorTargeted;                                  // 0x05EC(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyWaspTargeted;                                     // 0x0618(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyWatcherTargeted;                                  // 0x0644(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_EnemyWMDTargeted;                                      // 0x0670(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_FlagGrabbed;                                           // 0x069C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_FriendDowned;                                          // 0x06C8(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_FriendlyFire;                                          // 0x06F4(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_FriendlyUnitDestroyed;                                 // 0x0720(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Healed_Start;                                          // 0x074C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_IdleWaiting;                                           // 0x0778(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_LowHealthInCombat;                                     // 0x07A4(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_LowHealthNonCombat;                                    // 0x07D0(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_MeleeExertLarge;                                       // 0x07FC(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_MeleeExertSmall;                                       // 0x0828(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_MeleeExertSpecial;                                     // 0x0854(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_PayloadInteractStart;                                  // 0x0880(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Ping_Small;                                            // 0x08AC(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_PriorityTarget;                                        // 0x08D8(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_PriorityTargetLowHealth;                               // 0x0904(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_ReactExplo;                                            // 0x0930(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_UnitReturningToPlayer;                                 // 0x095C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Revived;                                               // 0x0988(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_SalvageStart;                                          // 0x09B4(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_SecuredCPPositive;                                     // 0x09E0(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_SecuringCPPositive;                                    // 0x0A0C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_SecuringFlag;                                          // 0x0A38(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_SelfDestroyed;                                         // 0x0A64(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Self_Destroyed_Drop;                                   // 0x0A90(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Stagger;                                               // 0x0ABC(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_UnderFire;                                             // 0x0AE8(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Wilco;                                                 // 0x0B14(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      Redshirt_FoundCombat;                                     // 0x0B40(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      Redshirt_FoundNonCombat;                                  // 0x0B6C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      Redshirt_Join;                                            // 0x0B98(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      Redshirt_Rescued;                                         // 0x0BC4(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Accolade_01;                                           // 0x0BF0(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Accolade_02;                                           // 0x0C1C(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FChatterPriorityConfig                      UC_Accolade_03;                                           // 0x0C48(0x002C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChatterConfig_BP.ChatterConfig_BP_C");
		return ptr;
	}


	struct FChatterPriorityConfig GetInitialConfigForCategory(EeChatterCategory* Category);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
