#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Door_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Door.Base_Door_C
// 0x0020 (0x0B68 - 0x0B48)
class ABase_Door_C : public ADoor_Base_SM_C
{
public:
	bool                                               IsGlass;                                                  // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBeAutomatic;                                           // 0x0B49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAutomatic;                                              // 0x0B4A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               AutoCloseOnly;                                            // 0x0B4B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               IsDefaultConfigSet;                                       // 0x0B4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B4D(0x0003) MISSED OFFSET
	float                                              CloseDelay;                                               // 0x0B50(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B54(0x0004) MISSED OFFSET
	TArray<class AActor*>                              NearbyPlayers;                                            // 0x0B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Door.Base_Door_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_Door(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
