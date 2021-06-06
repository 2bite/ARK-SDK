// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Rex_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Rex.DinoEntry_Rex_C.ExecuteUbergraph_DinoEntry_Rex
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Rex_C::ExecuteUbergraph_DinoEntry_Rex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Rex.DinoEntry_Rex_C.ExecuteUbergraph_DinoEntry_Rex");

	UDinoEntry_Rex_C_ExecuteUbergraph_DinoEntry_Rex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
