#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBoomerang_Frisbee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C
// 0x0000 (0x0EC0 - 0x0EC0)
class AWeapBoomerang_Frisbee_C : public AWeapBoomerang_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBoomerang_Frisbee.WeapBoomerang_Frisbee_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBoomerang_Frisbee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
