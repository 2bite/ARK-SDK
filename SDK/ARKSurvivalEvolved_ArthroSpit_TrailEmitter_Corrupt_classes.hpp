#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArthroSpit_TrailEmitter_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArthroSpit_TrailEmitter_Corrupt.ArthroSpit_TrailEmitter_Corrupt_C
// 0x0000 (0x0500 - 0x0500)
class AArthroSpit_TrailEmitter_Corrupt_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArthroSpit_TrailEmitter_Corrupt.ArthroSpit_TrailEmitter_Corrupt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArthroSpit_TrailEmitter_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif