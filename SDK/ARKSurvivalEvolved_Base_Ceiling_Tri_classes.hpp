#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Ceiling_Tri_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Ceiling_Tri.Base_Ceiling_Tri_C
// 0x0000 (0x0AB0 - 0x0AB0)
class ABase_Ceiling_Tri_C : public ACeiling_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Ceiling_Tri.Base_Ceiling_Tri_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_Ceiling_Tri(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
