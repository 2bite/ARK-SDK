// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_GenericMisc_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItem_GenericMisc.PrimalItem_GenericMisc_C.ExecuteUbergraph_PrimalItem_GenericMisc
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItem_GenericMisc_C::ExecuteUbergraph_PrimalItem_GenericMisc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItem_GenericMisc.PrimalItem_GenericMisc_C.ExecuteUbergraph_PrimalItem_GenericMisc");

	UPrimalItem_GenericMisc_C_ExecuteUbergraph_PrimalItem_GenericMisc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
