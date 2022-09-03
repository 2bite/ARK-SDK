// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekTeleporter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekTeleporter.PrimalItemStructure_TekTeleporter_C.ExecuteUbergraph_PrimalItemStructure_TekTeleporter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekTeleporter_C::ExecuteUbergraph_PrimalItemStructure_TekTeleporter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekTeleporter.PrimalItemStructure_TekTeleporter_C.ExecuteUbergraph_PrimalItemStructure_TekTeleporter");

	UPrimalItemStructure_TekTeleporter_C_ExecuteUbergraph_PrimalItemStructure_TekTeleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
