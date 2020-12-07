// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_DodoRex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_DodoRex.DinoEntry_DodoRex_C.ExecuteUbergraph_DinoEntry_DodoRex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_DodoRex_C::ExecuteUbergraph_DinoEntry_DodoRex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_DodoRex.DinoEntry_DodoRex_C.ExecuteUbergraph_DinoEntry_DodoRex");

	UDinoEntry_DodoRex_C_ExecuteUbergraph_DinoEntry_DodoRex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
