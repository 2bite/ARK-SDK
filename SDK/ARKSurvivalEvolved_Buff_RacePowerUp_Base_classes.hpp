#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RacePowerUp_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_RacePowerUp_Base_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RacePowerUp_Base.Buff_RacePowerUp_Base_C");
		return ptr;
	}


	void InitRacePowerUp(class AMissionType_Race_C* FromRaceMission);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RacePowerUp_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
