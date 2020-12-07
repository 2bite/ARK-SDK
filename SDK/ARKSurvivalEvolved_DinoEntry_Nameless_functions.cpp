// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Nameless_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Nameless.DinoEntry_Nameless_C.ExecuteUbergraph_DinoEntry_Nameless
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Nameless_C::ExecuteUbergraph_DinoEntry_Nameless(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Nameless.DinoEntry_Nameless_C.ExecuteUbergraph_DinoEntry_Nameless");

	UDinoEntry_Nameless_C_ExecuteUbergraph_DinoEntry_Nameless_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
