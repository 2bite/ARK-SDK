#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjRock.ProjRock_C
// 0x0000 (0x0688 - 0x0688)
class AProjRock_C : public APrimalProjectileArrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjRock.ProjRock_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjRock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
