// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementRefined_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementRefined.PrimalItemResource_ElementRefined_C.ExecuteUbergraph_PrimalItemResource_ElementRefined
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementRefined_C::ExecuteUbergraph_PrimalItemResource_ElementRefined(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementRefined.PrimalItemResource_ElementRefined_C.ExecuteUbergraph_PrimalItemResource_ElementRefined");

	UPrimalItemResource_ElementRefined_C_ExecuteUbergraph_PrimalItemResource_ElementRefined_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
