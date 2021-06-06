#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LadderBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LadderBaseBP.LadderBaseBP_C
// 0x0008 (0x0B48 - 0x0B40)
class ALadderBaseBP_C : public APrimalStructureLadder
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LadderBaseBP.LadderBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LadderBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
