// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Boa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Boa.DinoEntry_Boa_C.ExecuteUbergraph_DinoEntry_Boa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Boa_C::ExecuteUbergraph_DinoEntry_Boa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Boa.DinoEntry_Boa_C.ExecuteUbergraph_DinoEntry_Boa");

	UDinoEntry_Boa_C_ExecuteUbergraph_DinoEntry_Boa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
