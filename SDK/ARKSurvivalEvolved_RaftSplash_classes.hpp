#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RaftSplash_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RaftSplash.RaftSplash_C
// 0x0000 (0x0510 - 0x0510)
class ARaftSplash_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RaftSplash.RaftSplash_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RaftSplash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
