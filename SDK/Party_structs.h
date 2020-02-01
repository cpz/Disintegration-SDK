#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Party.EApprovalAction
enum class EApprovalAction : uint8_t
{
	EApprovalAction__Approve       = 0,
	EApprovalAction__Enqueue       = 1,
	EApprovalAction__EnqueueAndStartBeacon = 2,
	EApprovalAction__Deny          = 3,
	EApprovalAction__EApprovalAction_MAX = 4
};


// Enum Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8_t
{
	EPartyJoinDenialReason__NoReason = 0,
	EPartyJoinDenialReason__JoinAttemptAborted = 1,
	EPartyJoinDenialReason__Busy   = 2,
	EPartyJoinDenialReason__OssUnavailable = 3,
	EPartyJoinDenialReason__PartyFull = 4,
	EPartyJoinDenialReason__GameFull = 5,
	EPartyJoinDenialReason__NotPartyLeader = 6,
	EPartyJoinDenialReason__PartyPrivate = 7,
	EPartyJoinDenialReason__JoinerCrossplayRestricted = 8,
	EPartyJoinDenialReason__MemberCrossplayRestricted = 9,
	EPartyJoinDenialReason__GameModeRestricted = 10,
	EPartyJoinDenialReason__Banned = 11,
	EPartyJoinDenialReason__NotLoggedIn = 12,
	EPartyJoinDenialReason__CheckingForRejoin = 13,
	EPartyJoinDenialReason__TargetUserMissingPresence = 14,
	EPartyJoinDenialReason__TargetUserUnjoinable = 15,
	EPartyJoinDenialReason__TargetUserAway = 16,
	EPartyJoinDenialReason__AlreadyLeaderInPlatformSession = 17,
	EPartyJoinDenialReason__TargetUserPlayingDifferentGame = 18,
	EPartyJoinDenialReason__TargetUserMissingPlatformSession = 19,
	EPartyJoinDenialReason__PlatformSessionMissingJoinInfo = 20,
	EPartyJoinDenialReason__FailedToStartFindConsoleSession = 21,
	EPartyJoinDenialReason__MissingPartyClassForTypeId = 22,
	EPartyJoinDenialReason__TargetUserBlocked = 23,
	EPartyJoinDenialReason__CustomReason0 = 24,
	EPartyJoinDenialReason__CustomReason1 = 25,
	EPartyJoinDenialReason__CustomReason2 = 26,
	EPartyJoinDenialReason__CustomReason3 = 27,
	EPartyJoinDenialReason__CustomReason4 = 28,
	EPartyJoinDenialReason__CustomReason5 = 29,
	EPartyJoinDenialReason__CustomReason6 = 30,
	EPartyJoinDenialReason__CustomReason7 = 31,
	EPartyJoinDenialReason__CustomReason8 = 32,
	EPartyJoinDenialReason__CustomReason9 = 33,
	EPartyJoinDenialReason__CustomReason10 = 34,
	EPartyJoinDenialReason__CustomReason11 = 35,
	EPartyJoinDenialReason__CustomReason12 = 36,
	EPartyJoinDenialReason__CustomReason13 = 37,
	EPartyJoinDenialReason__CustomReason14 = 38,
	EPartyJoinDenialReason__CustomReason15 = 39,
	EPartyJoinDenialReason__CustomReason16 = 40,
	EPartyJoinDenialReason__CustomReason17 = 41,
	EPartyJoinDenialReason__CustomReason18 = 42,
	EPartyJoinDenialReason__CustomReason19 = 43,
	EPartyJoinDenialReason__CustomReason20 = 44,
	EPartyJoinDenialReason__CustomReason21 = 45,
	EPartyJoinDenialReason__CustomReason22 = 46,
	EPartyJoinDenialReason__CustomReason23 = 47,
	EPartyJoinDenialReason__CustomReason24 = 48,
	EPartyJoinDenialReason__CustomReason25 = 49,
	EPartyJoinDenialReason__CustomReason26 = 50,
	EPartyJoinDenialReason__CustomReason27 = 51,
	EPartyJoinDenialReason__CustomReason28 = 52,
	EPartyJoinDenialReason__CustomReason29 = 53,
	EPartyJoinDenialReason__CustomReason30 = 54,
	EPartyJoinDenialReason__CustomReason31 = 55,
	EPartyJoinDenialReason__CustomReason32 = 56,
	EPartyJoinDenialReason__CustomReason33 = 57,
	EPartyJoinDenialReason__CustomReason34 = 58,
	EPartyJoinDenialReason__CustomReason35 = 59,
	EPartyJoinDenialReason__CustomReason36 = 60,
	EPartyJoinDenialReason__CustomReason37 = 61,
	EPartyJoinDenialReason__CustomReason38 = 62,
	EPartyJoinDenialReason__CustomReason39 = 63,
	EPartyJoinDenialReason__MAX    = 64
};


// Enum Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8_t
{
	EPartyInviteRestriction__AnyMember = 0,
	EPartyInviteRestriction__LeaderOnly = 1,
	EPartyInviteRestriction__NoInvites = 2,
	EPartyInviteRestriction__EPartyInviteRestriction_MAX = 3
};


// Enum Party.EPartyType
enum class EPartyType : uint8_t
{
	EPartyType__Public             = 0,
	EPartyType__FriendsOnly        = 1,
	EPartyType__Private            = 2,
	EPartyType__EPartyType_MAX     = 3
};


// Enum Party.ESocialChannelType
enum class ESocialChannelType : uint8_t
{
	ESocialChannelType__General    = 0,
	ESocialChannelType__Founder    = 1,
	ESocialChannelType__Party      = 2,
	ESocialChannelType__Team       = 3,
	ESocialChannelType__System     = 4,
	ESocialChannelType__Private    = 5,
	ESocialChannelType__ESocialChannelType_MAX = 6
};


// Enum Party.ESendFriendInviteFailureReason
enum class ESendFriendInviteFailureReason : uint8_t
{
	ESendFriendInviteFailureReason__NotFound = 0,
	ESendFriendInviteFailureReason__AlreadyFriends = 1,
	ESendFriendInviteFailureReason__InvitePending = 2,
	ESendFriendInviteFailureReason__AddingSelfFail = 3,
	ESendFriendInviteFailureReason__AddingBlockedFail = 4,
	ESendFriendInviteFailureReason__UnknownError = 5,
	ESendFriendInviteFailureReason__ESendFriendInviteFailureReason_MAX = 6
};


// Enum Party.ECrossplayPreference
enum class ECrossplayPreference : uint8_t
{
	ECrossplayPreference__NoSelection = 0,
	ECrossplayPreference__OptedIn  = 1,
	ECrossplayPreference__OptedOut = 2,
	ECrossplayPreference__OptedOutRestricted = 3,
	ECrossplayPreference__ECrossplayPreference_MAX = 4
};


// Enum Party.ESocialRelationship
enum class ESocialRelationship : uint8_t
{
	ESocialRelationship__FriendInviteReceived = 0,
	ESocialRelationship__FriendInviteSent = 1,
	ESocialRelationship__PartyInvite = 2,
	ESocialRelationship__Friend    = 3,
	ESocialRelationship__BlockedPlayer = 4,
	ESocialRelationship__SuggestedFriend = 5,
	ESocialRelationship__RecentPlayer = 6,
	ESocialRelationship__ESocialRelationship_MAX = 7
};


// Enum Party.ESocialSubsystem
enum class ESocialSubsystem : uint8_t
{
	ESocialSubsystem__Primary      = 0,
	ESocialSubsystem__Platform     = 1,
	ESocialSubsystem__MAX          = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Party.OnlinePartyRepDataBase
// 0x0018
struct FOnlinePartyRepDataBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Party.UserPlatform
// 0x0010
struct FUserPlatform
{
	struct FString                                     PlatformStr;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Party.PartyMemberRepData
// 0x0130 (0x0148 - 0x0018)
struct FPartyMemberRepData : public FOnlinePartyRepDataBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FUserPlatform                               Platform;                                                 // 0x0020(0x0010)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
	struct FUniqueNetIdRepl                            PlatformUniqueId;                                         // 0x0068(0x0028)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0090(0x0038) MISSED OFFSET
	struct FString                                     PlatformSessionId;                                        // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x31];                                      // 0x00D8(0x0031) MISSED OFFSET
	ECrossplayPreference                               CrossplayPreference;                                      // 0x0109(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3E];                                      // 0x010A(0x003E) MISSED OFFSET
};

// ScriptStruct Party.PartyPrivacySettings
// 0x0003
struct FPartyPrivacySettings
{
	EPartyType                                         PartyType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EPartyInviteRestriction                            PartyInviteRestriction;                                   // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyLeaderFriendsCanJoin;                                // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Party.PartyPlatformSessionInfo
// 0x0040
struct FPartyPlatformSessionInfo
{
	struct FName                                       OssName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SessionId;                                                // 0x0008(0x0010) (ZeroConstructor)
	struct FUniqueNetIdRepl                            OwnerPrimaryId;                                           // 0x0018(0x0028)
};

// ScriptStruct Party.SocialChatChannelConfig
// 0x0040
struct FSocialChatChannelConfig
{
	class USocialUser*                                 SocialUser;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	TArray<class USocialChatChannel*>                  ListenChannels;                                           // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct Party.PartyRepData
// 0x0070 (0x0088 - 0x0018)
struct FPartyRepData : public FOnlinePartyRepDataBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FPartyPrivacySettings                       PrivacySettings;                                          // 0x0020(0x0003)
	unsigned char                                      UnknownData01[0x3D];                                      // 0x0023(0x003D) MISSED OFFSET
	TArray<struct FPartyPlatformSessionInfo>           PlatformSessions;                                         // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0070(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
