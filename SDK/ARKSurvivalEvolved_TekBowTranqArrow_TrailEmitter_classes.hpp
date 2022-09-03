#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekBowTranqArrow_TrailEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekBowTranqArrow_TrailEmitter.TekBowTranqArrow_TrailEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ATekBowTranqArrow_TrailEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekBowTranqArrow_TrailEmitter.TekBowTranqArrow_TrailEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekBowTranqArrow_TrailEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
