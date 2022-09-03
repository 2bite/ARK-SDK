#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTT_Summoner_SetIsDodging_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C
// 0x0001 (0x0079 - 0x0078)
class UBTT_Summoner_SetIsDodging_C : public UBTTask_BlueprintBase
{
public:
	bool                                               bIsDodging;                                               // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Summoner_SetIsDodging.BTT_Summoner_SetIsDodging_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_Summoner_SetIsDodging(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
