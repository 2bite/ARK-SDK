#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_Large_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sign_Large_Wood.Sign_Large_Wood_C
// 0x0008 (0x0B20 - 0x0B18)
class ASign_Large_Wood_C : public ASign_Large_Base_C
{
public:
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_Large_Wood.Sign_Large_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sign_Large_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
