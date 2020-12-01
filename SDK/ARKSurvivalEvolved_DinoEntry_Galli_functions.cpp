// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Galli_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Galli.DinoEntry_Galli_C.ExecuteUbergraph_DinoEntry_Galli
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Galli_C::ExecuteUbergraph_DinoEntry_Galli(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Galli.DinoEntry_Galli_C.ExecuteUbergraph_DinoEntry_Galli");

	UDinoEntry_Galli_C_ExecuteUbergraph_DinoEntry_Galli_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
