#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Space_NormalG_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C
// 0x0000 (0x0D76 - 0x0D76)
class AGen2_AreaBuff_Space_NormalG_C : public AGen2_AreaBuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen2_AreaBuff_Space_NormalG.Gen2_AreaBuff_Space_NormalG_C");
		return ptr;
	}


	void UpdateDayCycleManager();
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Gen2_AreaBuff_Space_NormalG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
