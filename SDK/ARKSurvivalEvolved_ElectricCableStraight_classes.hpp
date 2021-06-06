#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricCableStraight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElectricCableStraight.ElectricCableStraight_C
// 0x0000 (0x0B08 - 0x0B08)
class AElectricCableStraight_C : public AElectricCableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricCableStraight.ElectricCableStraight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricCableStraight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
