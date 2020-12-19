#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBoomerang_Frisbee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C
// 0x0000 (0x072C - 0x072C)
class AProjBoomerang_Frisbee_C : public AProjBoomerang_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjBoomerang_Frisbee.ProjBoomerang_Frisbee_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjBoomerang_Frisbee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
