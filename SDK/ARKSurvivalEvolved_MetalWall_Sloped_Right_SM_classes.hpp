#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalWall_Sloped_Right_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MetalWall_Sloped_Right_SM.MetalWall_Sloped_Right_SM_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AMetalWall_Sloped_Right_SM_C : public ABaseWall_Sloped_Right_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MetalWall_Sloped_Right_SM.MetalWall_Sloped_Right_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MetalWall_Sloped_Right_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
