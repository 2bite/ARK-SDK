#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateAoEFlee_Para_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C
// 0x001E (0x0088 - 0x006A)
class UDinoAttackStateAoEFlee_Para_C : public UDinoAttackStateAoEFlee_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET
	TArray<class UClass*>                              FrightenExtraDinoTypes;                                   // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FrightenMassThresholdCarnivore;                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrightenMassThresholdHerbivore;                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateAoEFlee_Para.DinoAttackStateAoEFlee_Para_C");
		return ptr;
	}


	void Should_Frighten_Character(class APrimalCharacter** Character, bool* ShouldFrighten);
	void Get_Octree_Group(TEnumAsByte<EServerOctreeGroup>* OctreeGroup);
	void ExecuteUbergraph_DinoAttackStateAoEFlee_Para(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
