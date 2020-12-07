// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Euryp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Euryp.DinoEntry_Euryp_C.ExecuteUbergraph_DinoEntry_Euryp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Euryp_C::ExecuteUbergraph_DinoEntry_Euryp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Euryp.DinoEntry_Euryp_C.ExecuteUbergraph_DinoEntry_Euryp");

	UDinoEntry_Euryp_C_ExecuteUbergraph_DinoEntry_Euryp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
