// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureStatsPanel_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureStatsPanel.StructureStatsPanel_C.ExecuteUbergraph_StructureStatsPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureStatsPanel_C::ExecuteUbergraph_StructureStatsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureStatsPanel.StructureStatsPanel_C.ExecuteUbergraph_StructureStatsPanel");

	UStructureStatsPanel_C_ExecuteUbergraph_StructureStatsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
