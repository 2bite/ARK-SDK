// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Therizino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Therizino.EngramEntry_Saddle_Therizino_C.ExecuteUbergraph_EngramEntry_Saddle_Therizino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Therizino_C::ExecuteUbergraph_EngramEntry_Saddle_Therizino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Therizino.EngramEntry_Saddle_Therizino_C.ExecuteUbergraph_EngramEntry_Saddle_Therizino");

	UEngramEntry_Saddle_Therizino_C_ExecuteUbergraph_EngramEntry_Saddle_Therizino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
