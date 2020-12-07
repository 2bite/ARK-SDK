// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekTransmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekTransmitter.PrimalItemStructure_TekTransmitter_C.ExecuteUbergraph_PrimalItemStructure_TekTransmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekTransmitter_C::ExecuteUbergraph_PrimalItemStructure_TekTransmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekTransmitter.PrimalItemStructure_TekTransmitter_C.ExecuteUbergraph_PrimalItemStructure_TekTransmitter");

	UPrimalItemStructure_TekTransmitter_C_ExecuteUbergraph_PrimalItemStructure_TekTransmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
