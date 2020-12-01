// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AggroTranqDart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AggroTranqDart.EngramEntry_AggroTranqDart_C.ExecuteUbergraph_EngramEntry_AggroTranqDart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AggroTranqDart_C::ExecuteUbergraph_EngramEntry_AggroTranqDart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AggroTranqDart.EngramEntry_AggroTranqDart_C.ExecuteUbergraph_EngramEntry_AggroTranqDart");

	UEngramEntry_AggroTranqDart_C_ExecuteUbergraph_EngramEntry_AggroTranqDart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
