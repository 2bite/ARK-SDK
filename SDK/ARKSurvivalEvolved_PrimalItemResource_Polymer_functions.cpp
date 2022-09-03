// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Polymer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Polymer.PrimalItemResource_Polymer_C.ExecuteUbergraph_PrimalItemResource_Polymer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Polymer_C::ExecuteUbergraph_PrimalItemResource_Polymer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Polymer.PrimalItemResource_Polymer_C.ExecuteUbergraph_PrimalItemResource_Polymer");

	UPrimalItemResource_Polymer_C_ExecuteUbergraph_PrimalItemResource_Polymer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
