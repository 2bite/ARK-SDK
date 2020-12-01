#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_Nutcracker_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjRock_Nutcracker.ProjRock_Nutcracker_C
// 0x0000 (0x0680 - 0x0680)
class AProjRock_Nutcracker_C : public AProjRock_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjRock_Nutcracker.ProjRock_Nutcracker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjRock_Nutcracker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
