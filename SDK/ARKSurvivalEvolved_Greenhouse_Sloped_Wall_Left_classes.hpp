#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Sloped_Wall_Left_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Greenhouse_Sloped_Wall_Left.Greenhouse_Sloped_Wall_Left_C
// 0x0000 (0x0AB8 - 0x0AB8)
class AGreenhouse_Sloped_Wall_Left_C : public ABaseWall_Sloped_Left_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Sloped_Wall_Left.Greenhouse_Sloped_Wall_Left_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Greenhouse_Sloped_Wall_Left(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
