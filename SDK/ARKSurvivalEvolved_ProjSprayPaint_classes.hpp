#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSprayPaint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjSprayPaint.ProjSprayPaint_C
// 0x0008 (0x0668 - 0x0660)
class AProjSprayPaint_C : public APrimalProjectileDilo
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSprayPaint.ProjSprayPaint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSprayPaint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
