#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PreservingBinEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PreservingBinEmitter.PreservingBinEmitter_C
// 0x0000 (0x0500 - 0x0500)
class APreservingBinEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PreservingBinEmitter.PreservingBinEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PreservingBinEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif