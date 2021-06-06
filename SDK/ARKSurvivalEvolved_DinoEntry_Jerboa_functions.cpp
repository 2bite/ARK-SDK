// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Jerboa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Jerboa.DinoEntry_Jerboa_C.ExecuteUbergraph_DinoEntry_Jerboa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Jerboa_C::ExecuteUbergraph_DinoEntry_Jerboa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Jerboa.DinoEntry_Jerboa_C.ExecuteUbergraph_DinoEntry_Jerboa");

	UDinoEntry_Jerboa_C_ExecuteUbergraph_DinoEntry_Jerboa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
