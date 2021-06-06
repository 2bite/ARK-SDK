// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekCloningChamber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekCloningChamber.PrimalItemStructure_TekCloningChamber_C.ExecuteUbergraph_PrimalItemStructure_TekCloningChamber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekCloningChamber_C::ExecuteUbergraph_PrimalItemStructure_TekCloningChamber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekCloningChamber.PrimalItemStructure_TekCloningChamber_C.ExecuteUbergraph_PrimalItemStructure_TekCloningChamber");

	UPrimalItemStructure_TekCloningChamber_C_ExecuteUbergraph_PrimalItemStructure_TekCloningChamber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
