#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Sloped_Wall_Right_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AGreenhouse_Sloped_Wall_Right_C : public ABaseWall_Sloped_Right_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Sloped_Wall_Right.Greenhouse_Sloped_Wall_Right_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Greenhouse_Sloped_Wall_Right(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
