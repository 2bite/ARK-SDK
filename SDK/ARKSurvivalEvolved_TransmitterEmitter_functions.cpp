// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TransmitterEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TransmitterEmitter.TransmitterEmitter_C.UserConstructionScript
// ()

void ATransmitterEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TransmitterEmitter.TransmitterEmitter_C.UserConstructionScript");

	ATransmitterEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TransmitterEmitter.TransmitterEmitter_C.ExecuteUbergraph_TransmitterEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATransmitterEmitter_C::ExecuteUbergraph_TransmitterEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TransmitterEmitter.TransmitterEmitter_C.ExecuteUbergraph_TransmitterEmitter");

	ATransmitterEmitter_C_ExecuteUbergraph_TransmitterEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
