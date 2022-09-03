#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BedBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BedBaseBP.BedBaseBP_C
// 0x0010 (0x0F50 - 0x0F40)
class ABedBaseBP_C : public APrimalStructureBed
{
public:
	class USphereComponent*                            SpecialOverlapComponent;                                  // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BedBaseBP.BedBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BedBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
