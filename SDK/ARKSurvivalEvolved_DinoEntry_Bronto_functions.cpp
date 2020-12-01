// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Bronto_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Bronto.DinoEntry_Bronto_C.ExecuteUbergraph_DinoEntry_Bronto
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Bronto_C::ExecuteUbergraph_DinoEntry_Bronto(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Bronto.DinoEntry_Bronto_C.ExecuteUbergraph_DinoEntry_Bronto");

	UDinoEntry_Bronto_C_ExecuteUbergraph_DinoEntry_Bronto_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
