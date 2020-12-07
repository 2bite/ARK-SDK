#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Matinee_HordeMode_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Matinee_HordeMode.Matinee_HordeMode_C
// 0x0000 (0x04F0 - 0x04F0)
class AMatinee_HordeMode_C : public AMatineeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Matinee_HordeMode.Matinee_HordeMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Matinee_HordeMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
