// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_FenceSupport_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_FenceSupport_Wood.PrimalItemStructure_FenceSupport_Wood_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_FenceSupport_Wood_C::ExecuteUbergraph_PrimalItemStructure_FenceSupport_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_FenceSupport_Wood.PrimalItemStructure_FenceSupport_Wood_C.ExecuteUbergraph_PrimalItemStructure_FenceSupport_Wood");

	UPrimalItemStructure_FenceSupport_Wood_C_ExecuteUbergraph_PrimalItemStructure_FenceSupport_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
