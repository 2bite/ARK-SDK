#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricCableBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElectricCableBaseBP.ElectricCableBaseBP_C
// 0x0000 (0x0B08 - 0x0B08)
class AElectricCableBaseBP_C : public ACableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricCableBaseBP.ElectricCableBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricCableBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
