// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByStone_AllowInstant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StructureSettings_BrokenByStone_AllowInstant.StructureSettings_BrokenByStone_AllowInstant_C.ExecuteUbergraph_StructureSettings_BrokenByStone_AllowInstant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStructureSettings_BrokenByStone_AllowInstant_C::ExecuteUbergraph_StructureSettings_BrokenByStone_AllowInstant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StructureSettings_BrokenByStone_AllowInstant.StructureSettings_BrokenByStone_AllowInstant_C.ExecuteUbergraph_StructureSettings_BrokenByStone_AllowInstant");

	UStructureSettings_BrokenByStone_AllowInstant_C_ExecuteUbergraph_StructureSettings_BrokenByStone_AllowInstant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
