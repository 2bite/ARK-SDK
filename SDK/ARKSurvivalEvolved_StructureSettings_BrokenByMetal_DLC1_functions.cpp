// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByMetal_DLC1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_BrokenByMetal_DLC1.StructureSettings_BrokenByMetal_DLC1_C.ExecuteUbergraph_StructureSettings_BrokenByMetal_DLC1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByMetal_DLC1_C::ExecuteUbergraph_StructureSettings_BrokenByMetal_DLC1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByMetal_DLC1.StructureSettings_BrokenByMetal_DLC1_C.ExecuteUbergraph_StructureSettings_BrokenByMetal_DLC1");

	UStructureSettings_BrokenByMetal_DLC1_C_ExecuteUbergraph_StructureSettings_BrokenByMetal_DLC1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
